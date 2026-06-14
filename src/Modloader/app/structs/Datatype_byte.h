#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_byte_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_byte_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_byte_DEFINED)
#include <Modloader/app/structs/Datatype_byte__Fields.h>
#if defined(IL2CPP_STRUCT_Datatype_byte__Fields_DEFINED)
#define IL2CPP_STRUCT_Datatype_byte_DEFINED
struct Datatype_byte__Class;
struct Datatype_byte {
    struct Datatype_byte__Class* klass;
    MonitorData* monitor;
    struct Datatype_byte__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Datatype_byte_FWDDECL)
#define IL2CPP_STRUCT_Datatype_byte_FWDDECL
#include <Modloader/app/structs/Datatype_byte__Class.h>
#endif
#undef IL2CPP_STRUCT_Datatype_byte_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_byte_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_byte_FWDDECL)
#include <Modloader/app/structs/Datatype_byte.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_byte.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
