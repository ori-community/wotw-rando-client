#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MMKVPMarshaller_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MMKVPMarshaller_INITIALIZING
#if !defined(IL2CPP_STRUCT_MMKVPMarshaller_DEFINED)
#include <Modloader/app/structs/MMKVPMarshaller__Fields.h>
#if defined(IL2CPP_STRUCT_MMKVPMarshaller__Fields_DEFINED)
#define IL2CPP_STRUCT_MMKVPMarshaller_DEFINED
struct MMKVPMarshaller__Class;
struct MMKVPMarshaller {
    struct MMKVPMarshaller__Class* klass;
    MonitorData* monitor;
    struct MMKVPMarshaller__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MMKVPMarshaller_FWDDECL)
#define IL2CPP_STRUCT_MMKVPMarshaller_FWDDECL
#include <Modloader/app/structs/MMKVPMarshaller__Class.h>
#endif
#undef IL2CPP_STRUCT_MMKVPMarshaller_INITIALIZING
#if !defined(IL2CPP_STRUCT_MMKVPMarshaller_DEFINED) && !defined(IL2CPP_STRUCT_MMKVPMarshaller_FWDDECL)
#include <Modloader/app/structs/MMKVPMarshaller.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MMKVPMarshaller.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
