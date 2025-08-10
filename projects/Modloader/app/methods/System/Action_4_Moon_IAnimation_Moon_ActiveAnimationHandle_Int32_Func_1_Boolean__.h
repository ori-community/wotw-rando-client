#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean__ {
    IL2CPP_REGISTER_METHOD(
        0x02C17600,
        void,
        Invoke,
        app::Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_* this_ptr,
        app::IAnimation* arg1,
        app::ActiveAnimationHandle arg2,
        int32_t arg3,
        app::Func_1_Boolean_* arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean_* this_ptr,
        app::Object* object,
        void* method_1
    )
} // namespace app::classes::System::Action_4_Moon_IAnimation_Moon_ActiveAnimationHandle_Int32_Func_1_Boolean__
