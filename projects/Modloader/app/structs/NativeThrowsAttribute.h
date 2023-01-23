#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NativeThrowsAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NativeThrowsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeThrowsAttribute_DEFINED)
#include <Modloader/app/structs/NativeThrowsAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NativeThrowsAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NativeThrowsAttribute_DEFINED
struct NativeThrowsAttribute__Class;
struct NativeThrowsAttribute {
    struct NativeThrowsAttribute__Class* klass;
    MonitorData* monitor;
    struct NativeThrowsAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NativeThrowsAttribute_FWDDECL)
#define IL2CPP_STRUCT_NativeThrowsAttribute_FWDDECL
#include <Modloader/app/structs/NativeThrowsAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NativeThrowsAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NativeThrowsAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NativeThrowsAttribute_FWDDECL)
#include <Modloader/app/structs/NativeThrowsAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NativeThrowsAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
