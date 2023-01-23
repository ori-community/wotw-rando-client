#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water3Float_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water3Float_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3Float_DEFINED)
#include <Modloader/app/structs/Water3Float__Fields.h>
#if defined(IL2CPP_STRUCT_Water3Float__Fields_DEFINED)
#define IL2CPP_STRUCT_Water3Float_DEFINED
struct Water3Float__Class;
struct Water3Float {
    struct Water3Float__Class* klass;
    MonitorData* monitor;
    struct Water3Float__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water3Float_FWDDECL)
#define IL2CPP_STRUCT_Water3Float_FWDDECL
#include <Modloader/app/structs/Water3Float__Class.h>
#endif
#undef IL2CPP_STRUCT_Water3Float_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3Float_DEFINED) && !defined(IL2CPP_STRUCT_Water3Float_FWDDECL)
#include <Modloader/app/structs/Water3Float.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water3Float.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
