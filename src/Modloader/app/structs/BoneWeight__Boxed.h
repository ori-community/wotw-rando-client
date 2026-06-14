#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BoneWeight__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BoneWeight__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoneWeight__Boxed_DEFINED)
#include <Modloader/app/structs/BoneWeight.h>
#if defined(IL2CPP_STRUCT_BoneWeight_DEFINED)
#define IL2CPP_STRUCT_BoneWeight__Boxed_DEFINED
struct BoneWeight__Class;
struct BoneWeight__Boxed {
    struct BoneWeight__Class* klass;
    MonitorData* monitor;
    struct BoneWeight fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BoneWeight__Boxed_FWDDECL)
#define IL2CPP_STRUCT_BoneWeight__Boxed_FWDDECL
#include <Modloader/app/structs/BoneWeight__Class.h>
#endif
#undef IL2CPP_STRUCT_BoneWeight__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_BoneWeight__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_BoneWeight__Boxed_FWDDECL)
#include <Modloader/app/structs/BoneWeight__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BoneWeight__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
