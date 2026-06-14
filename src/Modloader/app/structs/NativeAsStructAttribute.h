#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeAsStructAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeAsStructAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeAsStructAttribute_DEFINED)
#define IL2CPP_STRUCT_NativeAsStructAttribute_DEFINED
struct NativeAsStructAttribute__Class;
struct NativeAsStructAttribute {
    struct NativeAsStructAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NativeAsStructAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeAsStructAttribute_FWDDECL
#include <Modloader/app/structs/NativeAsStructAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeAsStructAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeAsStructAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeAsStructAttribute_FWDDECL)
#include <Modloader/app/structs/NativeAsStructAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeAsStructAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
