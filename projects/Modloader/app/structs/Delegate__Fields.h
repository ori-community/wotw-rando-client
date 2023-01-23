#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Delegate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Delegate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Delegate__Fields_DEFINED)
#define IL2CPP_STRUCT_Delegate__Fields_DEFINED
struct Object;
struct MethodInfo_1;
struct DelegateData;
struct __declspec(align(8)) Delegate__Fields {
    void* method_ptr;
    void* invoke_impl;
    struct Object* m_target;
    void* method;
    void* delegate_trampoline;
    void* extra_arg;
    void* method_code;
    struct MethodInfo_1* method_info;
    struct MethodInfo_1* original_method_info;
    struct DelegateData* data;
    bool method_is_virtual;
};
#endif
#if !defined(IL2CPP_STRUCT_Delegate__Fields_FWDDECL)
#define IL2CPP_STRUCT_Delegate__Fields_FWDDECL
#include <Modloader/app/structs/DelegateData.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_Delegate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Delegate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Delegate__Fields_FWDDECL)
#include <Modloader/app/structs/Delegate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Delegate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
