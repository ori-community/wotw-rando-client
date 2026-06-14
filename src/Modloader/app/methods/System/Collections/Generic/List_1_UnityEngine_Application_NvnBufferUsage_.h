#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Application_NvnBufferUsage__Enum.h>
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_Application_NvnBufferUsage_.h>

namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Application_NvnBufferUsage_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_UnityEngine_Application_NvnBufferUsage_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1C970, void, Add, app::List_1_UnityEngine_Application_NvnBufferUsage_* this_ptr, app::Application_NvnBufferUsage__Enum item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Application_NvnBufferUsage__Enum__Array*, ToArray, app::List_1_UnityEngine_Application_NvnBufferUsage_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_UnityEngine_Application_NvnBufferUsage_
