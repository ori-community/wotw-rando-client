#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StackTrace.h>

namespace app::classes::UnityEngine::StackTraceUtility {
    IL2CPP_REGISTER_METHOD(0x02C63660, void, SetProjectFolder, (app::String * folder))
    IL2CPP_REGISTER_METHOD(0x02C63780, app::String*, ExtractStackTrace, ())
    IL2CPP_REGISTER_METHOD(0x02C63910, void, ExtractStringFromExceptionInternal, (app::Object * exceptiono, app::String** message, app::String** stack_trace))
    IL2CPP_REGISTER_METHODINFO(0x04708558, StackTraceUtility_ExtractStringFromExceptionInternal__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C63E90, app::String*, ExtractFormattedStackTrace, (app::StackTrace * stack_trace))
    IL2CPP_REGISTER_METHOD(0x02C64710, void, cctor, ())
} // namespace app::classes::UnityEngine::StackTraceUtility
