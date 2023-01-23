#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionDecorator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDecorator_DEFINED)
#include <Modloader/app/structs/ActionDecorator__Fields.h>
#if defined(IL2CPP_STRUCT_ActionDecorator__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionDecorator_DEFINED
struct ActionDecorator__Class;
struct ActionDecorator {
    struct ActionDecorator__Class* klass;
    MonitorData* monitor;
    struct ActionDecorator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionDecorator_FWDDECL)
#define IL2CPP_STRUCT_ActionDecorator_FWDDECL
#include <Modloader/app/structs/ActionDecorator__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionDecorator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionDecorator_DEFINED) && !defined(IL2CPP_STRUCT_ActionDecorator_FWDDECL)
#include <Modloader/app/structs/ActionDecorator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionDecorator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
