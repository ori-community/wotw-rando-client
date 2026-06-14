#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnitySerializationHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnitySerializationHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySerializationHolder_DEFINED)
#include <Modloader/app/structs/UnitySerializationHolder__Fields.h>
#if defined(IL2CPP_STRUCT_UnitySerializationHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_UnitySerializationHolder_DEFINED
struct UnitySerializationHolder__Class;
struct UnitySerializationHolder {
    struct UnitySerializationHolder__Class* klass;
    MonitorData* monitor;
    struct UnitySerializationHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnitySerializationHolder_FWDDECL)
#define IL2CPP_STRUCT_UnitySerializationHolder_FWDDECL
#include <Modloader/app/structs/UnitySerializationHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_UnitySerializationHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySerializationHolder_DEFINED) && !defined(IL2CPP_STRUCT_UnitySerializationHolder_FWDDECL)
#include <Modloader/app/structs/UnitySerializationHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnitySerializationHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
