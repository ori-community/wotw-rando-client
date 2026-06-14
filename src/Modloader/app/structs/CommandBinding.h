#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommandBinding_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommandBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandBinding_DEFINED)
#include <Modloader/app/structs/CommandBinding__Fields.h>
#if defined(IL2CPP_STRUCT_CommandBinding__Fields_DEFINED)
#define IL2CPP_STRUCT_CommandBinding_DEFINED
struct CommandBinding__Class;
struct CommandBinding {
    struct CommandBinding__Class* klass;
    MonitorData* monitor;
    struct CommandBinding__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CommandBinding_FWDDECL)
#define IL2CPP_STRUCT_CommandBinding_FWDDECL
#include <Modloader/app/structs/CommandBinding__Class.h>
#endif
#undef IL2CPP_STRUCT_CommandBinding_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandBinding_DEFINED) && !defined(IL2CPP_STRUCT_CommandBinding_FWDDECL)
#include <Modloader/app/structs/CommandBinding.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommandBinding.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
