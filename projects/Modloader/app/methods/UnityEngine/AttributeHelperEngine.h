#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DefaultExecutionOrder.h>

namespace app::classes::UnityEngine::AttributeHelperEngine {
    IL2CPP_REGISTER_METHOD(0x0241E7B0, app::Type*, GetParentTypeDisallowingMultipleInclusion, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x0241E8F0, app::Type__Array*, GetRequiredComponents, (app::Type * klass))
    IL2CPP_REGISTER_METHOD(0x0241ED10, int32_t, GetExecuteMode, (app::Type * klass))
    IL2CPP_REGISTER_METHOD(0x0241EE70, int32_t, CheckIsEditorScript, (app::Type * klass))
    IL2CPP_REGISTER_METHOD(0x0241EF90, int32_t, GetDefaultExecutionOrderFor, (app::Type * klass))
    IL2CPP_REGISTER_METHOD(0x0241F050, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x0157C0E0, app::Object*, GetCustomAttributeOfType_1, (app::Type * klass))
    IL2CPP_REGISTER_METHOD(0x0157C0E0, app::DefaultExecutionOrder*, GetCustomAttributeOfType_2, (app::Type * klass))
    IL2CPP_REGISTER_METHODINFO(0x04731950, AttributeHelperEngine_GetCustomAttributeOfType_1__MethodInfo)
} // namespace app::classes::UnityEngine::AttributeHelperEngine
