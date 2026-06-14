#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlTypeException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlTypeException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlTypeException_DEFINED)
#include <Modloader/app/structs/SqlTypeException__Fields.h>
#if defined(IL2CPP_STRUCT_SqlTypeException__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlTypeException_DEFINED
struct SqlTypeException__Class;
struct SqlTypeException {
    struct SqlTypeException__Class* klass;
    MonitorData* monitor;
    struct SqlTypeException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlTypeException_FWDDECL)
#define IL2CPP_STRUCT_SqlTypeException_FWDDECL
#include <Modloader/app/structs/SqlTypeException__Class.h>
#endif
#undef IL2CPP_STRUCT_SqlTypeException_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlTypeException_DEFINED) && !defined(IL2CPP_STRUCT_SqlTypeException_FWDDECL)
#include <Modloader/app/structs/SqlTypeException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlTypeException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
