#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DuplicateNameException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DuplicateNameException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DuplicateNameException_DEFINED)
#include <Modloader/app/structs/DuplicateNameException__Fields.h>
#if defined(IL2CPP_STRUCT_DuplicateNameException__Fields_DEFINED)
#define IL2CPP_STRUCT_DuplicateNameException_DEFINED
struct DuplicateNameException__Class;
struct DuplicateNameException {
    struct DuplicateNameException__Class* klass;
    MonitorData* monitor;
    struct DuplicateNameException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DuplicateNameException_FWDDECL)
#define IL2CPP_STRUCT_DuplicateNameException_FWDDECL
#include <Modloader/app/structs/DuplicateNameException__Class.h>
#endif
#undef IL2CPP_STRUCT_DuplicateNameException_INITIALIZING
#if !defined(IL2CPP_STRUCT_DuplicateNameException_DEFINED) && !defined(IL2CPP_STRUCT_DuplicateNameException_FWDDECL)
#include <Modloader/app/structs/DuplicateNameException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DuplicateNameException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
