#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidDataException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidDataException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidDataException_DEFINED)
#include <Modloader/app/structs/InvalidDataException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidDataException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidDataException_DEFINED
struct InvalidDataException__Class;
struct InvalidDataException {
    struct InvalidDataException__Class* klass;
    MonitorData* monitor;
    struct InvalidDataException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidDataException_FWDDECL)
#define IL2CPP_STRUCT_InvalidDataException_FWDDECL
#include <Modloader/app/structs/InvalidDataException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidDataException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidDataException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidDataException_FWDDECL)
#include <Modloader/app/structs/InvalidDataException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidDataException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
