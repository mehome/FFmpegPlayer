//
// Created by renzhenming on 2018/10/24.
//

#ifndef FFMPEGPLAYER_GLVIDEOVIEW_H
#define FFMPEGPLAYER_GLVIDEOVIEW_H

#include "XData.h"
#include "IVideoView.h"

class XTexture;

class GLVideoView : public IVideoView {
public:
    virtual void SetRender(void *window);

    virtual void Render(XData data);

    virtual void Close();

protected:
    void *view = 0;
    XTexture *texture = 0;
    std::mutex mutex;
};

#endif //FFMPEGPLAYER_GLVIDEOVIEW_H
