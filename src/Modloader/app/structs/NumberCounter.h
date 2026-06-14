#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NumberCounter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NumberCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberCounter_DEFINED)
#include <Modloader/app/structs/NumberCounter__Fields.h>
#if defined(IL2CPP_STRUCT_NumberCounter__Fields_DEFINED)
#define IL2CPP_STRUCT_NumberCounter_DEFINED
struct NumberCounter__Class;
struct NumberCounter {
    struct NumberCounter__Class* klass;
    MonitorData* monitor;
    struct NumberCounter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NumberCounter_FWDDECL)
#define IL2CPP_STRUCT_NumberCounter_FWDDECL
#include <Modloader/app/structs/NumberCounter__Class.h>
#endif
#undef IL2CPP_STRUCT_NumberCounter_INITIALIZING
#if !defined(IL2CPP_STRUCT_NumberCounter_DEFINED) && !defined(IL2CPP_STRUCT_NumberCounter_FWDDECL)
#include <Modloader/app/structs/NumberCounter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NumberCounter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
