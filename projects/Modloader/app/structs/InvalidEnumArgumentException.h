#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InvalidEnumArgumentException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InvalidEnumArgumentException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidEnumArgumentException_DEFINED)
#include <Modloader/app/structs/InvalidEnumArgumentException__Fields.h>
#if defined(IL2CPP_STRUCT_InvalidEnumArgumentException__Fields_DEFINED)
#define IL2CPP_STRUCT_InvalidEnumArgumentException_DEFINED
struct InvalidEnumArgumentException__Class;
struct InvalidEnumArgumentException {
    struct InvalidEnumArgumentException__Class* klass;
    MonitorData* monitor;
    struct InvalidEnumArgumentException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InvalidEnumArgumentException_FWDDECL)
#define IL2CPP_STRUCT_InvalidEnumArgumentException_FWDDECL
#include <Modloader/app/structs/InvalidEnumArgumentException__Class.h>
#endif
#undef IL2CPP_STRUCT_InvalidEnumArgumentException_INITIALIZING
#if !defined(IL2CPP_STRUCT_InvalidEnumArgumentException_DEFINED) && !defined(IL2CPP_STRUCT_InvalidEnumArgumentException_FWDDECL)
#include <Modloader/app/structs/InvalidEnumArgumentException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InvalidEnumArgumentException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
