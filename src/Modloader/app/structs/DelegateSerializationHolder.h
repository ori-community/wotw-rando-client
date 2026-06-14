#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelegateSerializationHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelegateSerializationHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegateSerializationHolder_DEFINED)
#include <Modloader/app/structs/DelegateSerializationHolder__Fields.h>
#if defined(IL2CPP_STRUCT_DelegateSerializationHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_DelegateSerializationHolder_DEFINED
struct DelegateSerializationHolder__Class;
struct DelegateSerializationHolder {
    struct DelegateSerializationHolder__Class* klass;
    MonitorData* monitor;
    struct DelegateSerializationHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelegateSerializationHolder_FWDDECL)
#define IL2CPP_STRUCT_DelegateSerializationHolder_FWDDECL
#include <Modloader/app/structs/DelegateSerializationHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_DelegateSerializationHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegateSerializationHolder_DEFINED) && !defined(IL2CPP_STRUCT_DelegateSerializationHolder_FWDDECL)
#include <Modloader/app/structs/DelegateSerializationHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelegateSerializationHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
