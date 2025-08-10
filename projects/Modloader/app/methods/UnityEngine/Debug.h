#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ILogger.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Debug {
    IL2CPP_REGISTER_METHOD(0x0242BD40, app::ILogger*, get_unityLogger, )
    IL2CPP_REGISTER_METHOD(0x0242BDE0, void, DrawLine_1, app::Vector3 start, app::Vector3 end, app::Color color, float duration)
    IL2CPP_REGISTER_METHOD(0x0242BFB0, void, DrawLine_2, app::Vector3 start, app::Vector3 end, app::Color color)
    IL2CPP_REGISTER_METHOD(0x0242C170, void, DrawLine_3, app::Vector3 start, app::Vector3 end)
    IL2CPP_REGISTER_METHOD(0x0242C340, void, DrawLine_4, app::Vector3 start, app::Vector3 end, app::Color color, float duration, bool depth_test)
    IL2CPP_REGISTER_METHOD(0x0242C450, void, DrawRay_1, app::Vector3 start, app::Vector3 dir, app::Color color, float duration)
    IL2CPP_REGISTER_METHOD(0x0242C560, void, DrawRay_2, app::Vector3 start, app::Vector3 dir, app::Color color)
    IL2CPP_REGISTER_METHOD(0x0242C660, void, DrawRay_3, app::Vector3 start, app::Vector3 dir, app::Color color, float duration, bool depth_test)
    IL2CPP_REGISTER_METHOD(0x0242C890, void, Break, )
    IL2CPP_REGISTER_METHOD(0x0242C8E0, void, Log_1, app::Object* message)
    IL2CPP_REGISTER_METHOD(0x0242C9A0, void, Log_2, app::Object* message, app::Object_1* context)
    IL2CPP_REGISTER_METHOD(0x0242CA70, void, LogFormat, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x0242CB40, void, LogError_1, app::Object* message)
    IL2CPP_REGISTER_METHOD(0x0242CC00, void, LogError_2, app::Object* message, app::Object_1* context)
    IL2CPP_REGISTER_METHOD(0x0242CCD0, void, LogErrorFormat_1, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x0242CDA0, void, LogErrorFormat_2, app::Object_1* context, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x0242CE80, void, ClearDeveloperConsole, )
    IL2CPP_REGISTER_METHOD(0x0242CED0, void, set_developerConsoleVisible, bool value)
    IL2CPP_REGISTER_METHOD(0x0242CF20, void, LogException_1, app::Exception* exception)
    IL2CPP_REGISTER_METHOD(0x0242CFE0, void, LogException_2, app::Exception* exception, app::Object_1* context)
    IL2CPP_REGISTER_METHOD(0x0242D0A0, void, LogWarning_1, app::Object* message)
    IL2CPP_REGISTER_METHOD(0x0242D160, void, LogWarning_2, app::Object* message, app::Object_1* context)
    IL2CPP_REGISTER_METHOD(0x0242D230, void, LogWarningFormat_1, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x0242D300, void, LogWarningFormat_2, app::Object_1* context, app::String* format, app::Object__Array* args)
    IL2CPP_REGISTER_METHOD(0x0242D3E0, void, LogAssertion, app::Object* message)
    IL2CPP_REGISTER_METHOD(0x0242D4A0, bool, get_isDebugBuild, )
    IL2CPP_REGISTER_METHOD(0x0242D4F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0242D700, void, DrawLine_Injected, app::Vector3* start, app::Vector3* end, app::Color* color, float duration, bool depth_test)
} // namespace app::classes::UnityEngine::Debug
