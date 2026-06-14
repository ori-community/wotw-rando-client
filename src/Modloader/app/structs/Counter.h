#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Counter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Counter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Counter_DEFINED)
#include <Modloader/app/structs/Counter__Fields.h>
#if defined(IL2CPP_STRUCT_Counter__Fields_DEFINED)
#define IL2CPP_STRUCT_Counter_DEFINED
struct Counter__Class;
struct Counter {
    struct Counter__Class* klass;
    MonitorData* monitor;
    struct Counter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Counter_FWDDECL)
#define IL2CPP_STRUCT_Counter_FWDDECL
#include <Modloader/app/structs/Counter__Class.h>
#endif
#undef IL2CPP_STRUCT_Counter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Counter_DEFINED) && !defined(IL2CPP_STRUCT_Counter_FWDDECL)
#include <Modloader/app/structs/Counter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Counter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
