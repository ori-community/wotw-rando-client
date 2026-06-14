#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeInputSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeInputSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_NativeInputSystem__StaticFields_DEFINED
struct NativeUpdateCallback;
struct Action_1_UnityEngineInternal_Input_NativeInputUpdateType_;
struct Action_2_Int32_String_;
struct NativeInputSystem__StaticFields {
    struct NativeUpdateCallback* onUpdate;
    struct Action_1_UnityEngineInternal_Input_NativeInputUpdateType_* onBeforeUpdate;
    struct Action_2_Int32_String_* s_OnDeviceDiscoveredCallback;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeInputSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_NativeInputSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngineInternal_Input_NativeInputUpdateType_.h>
#include <Modloader/app/structs/Action_2_Int32_String_.h>
#include <Modloader/app/structs/NativeUpdateCallback.h>
#endif
#undef IL2CPP_STRUCT_NativeInputSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeInputSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_NativeInputSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/NativeInputSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeInputSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
