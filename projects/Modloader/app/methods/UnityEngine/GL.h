#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::GL {
    IL2CPP_REGISTER_METHOD(0x02526170, void, Vertex3, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x025261F0, void, Vertex, app::Vector3 v)
    IL2CPP_REGISTER_METHOD(0x02526210, void, TexCoord3, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02526290, void, TexCoord2, float x, float y)
    IL2CPP_REGISTER_METHOD(0x02526300, void, MultiTexCoord3, int32_t unit, float x, float y, float z)
    IL2CPP_REGISTER_METHOD(0x02526390, void, MultiTexCoord2, int32_t unit, float x, float y)
    IL2CPP_REGISTER_METHOD(0x02526410, void, ImmediateColor, float r, float g, float b, float a)
    IL2CPP_REGISTER_METHOD(0x025264A0, void, Color, app::Color c)
    IL2CPP_REGISTER_METHOD(0x02526500, void, SetViewMatrix, app::Matrix4x4 m)
    IL2CPP_REGISTER_METHOD(0x02526550, void, set_modelview, app::Matrix4x4 value)
    IL2CPP_REGISTER_METHOD(0x025265C0, void, MultMatrix, app::Matrix4x4 m)
    IL2CPP_REGISTER_METHOD(0x02526610, void, IssuePluginEvent, int32_t event_i_d)
    IL2CPP_REGISTER_METHOD(0x02526660, void, SetRevertBackfacing, bool revert_back_faces)
    IL2CPP_REGISTER_METHOD(0x025266B0, void, PushMatrix, )
    IL2CPP_REGISTER_METHOD(0x02526700, void, PopMatrix, )
    IL2CPP_REGISTER_METHOD(0x02526750, void, LoadIdentity, )
    IL2CPP_REGISTER_METHOD(0x025267A0, void, LoadOrtho, )
    IL2CPP_REGISTER_METHOD(0x025267F0, void, LoadPixelMatrix_1, )
    IL2CPP_REGISTER_METHOD(0x02526840, void, LoadProjectionMatrix, app::Matrix4x4 mat)
    IL2CPP_REGISTER_METHOD(0x02526890, app::Matrix4x4, GetGPUProjectionMatrix, app::Matrix4x4 proj, bool render_into_texture)
    IL2CPP_REGISTER_METHOD(0x02526950, void, GLLoadPixelMatrixScript, float left, float right, float bottom, float top)
    IL2CPP_REGISTER_METHOD(0x02526950, void, LoadPixelMatrix_2, float left, float right, float bottom, float top)
    IL2CPP_REGISTER_METHOD(0x025269E0, void, Begin, int32_t mode)
    IL2CPP_REGISTER_METHOD(0x02526A30, void, End, )
    IL2CPP_REGISTER_METHOD(0x02526A80, void, GLClear, bool clear_depth, bool clear_color, app::Color background_color, float depth)
    IL2CPP_REGISTER_METHOD(0x02526B10, void, Clear, bool clear_depth, bool clear_color, app::Color background_color)
    IL2CPP_REGISTER_METHOD(0x02526B90, void, ClearWithSkybox, bool clear_depth, app::Camera* camera)
    IL2CPP_REGISTER_METHOD(0x02526BF0, void, SetViewMatrix_Injected, app::Matrix4x4* m)
    IL2CPP_REGISTER_METHOD(0x02526C40, void, MultMatrix_Injected, app::Matrix4x4* m)
    IL2CPP_REGISTER_METHOD(0x02526C90, void, LoadProjectionMatrix_Injected, app::Matrix4x4* mat)
    IL2CPP_REGISTER_METHOD(0x02526CE0, void, GetGPUProjectionMatrix_Injected, app::Matrix4x4* proj, bool render_into_texture, app::Matrix4x4* ret)
    IL2CPP_REGISTER_METHOD(0x02526D50, void, GLClear_Injected, bool clear_depth, bool clear_color, app::Color* background_color, float depth)
} // namespace app::classes::UnityEngine::GL
