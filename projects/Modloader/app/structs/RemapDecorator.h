#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemapDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemapDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemapDecorator_DEFINED)
#include <Modloader/app/structs/RemapDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_RemapDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_RemapDecorator_DEFINED
struct RemapDecorator__Class;
struct RemapDecorator {
    struct RemapDecorator__Class* klass;
    MonitorData* monitor;
    struct RemapDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemapDecorator_FWDDECL)
#define IL2CPP_STRUCT_RemapDecorator_FWDDECL
#include <Modloader/app/structs/RemapDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_RemapDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemapDecorator_DEFINED) && !defined(IL2CPP_STRUCT_RemapDecorator_FWDDECL)
#include <Modloader/app/structs/RemapDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemapDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
