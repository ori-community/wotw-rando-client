#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X520_DomainComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X520_DomainComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_DomainComponent_DEFINED)
#include <Modloader/app/structs/X520_DomainComponent__Fields.h>
#if defined(IL2CPP_STRUCT_X520_DomainComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_X520_DomainComponent_DEFINED
struct X520_DomainComponent__Class;
struct X520_DomainComponent {
    struct X520_DomainComponent__Class* klass;
    MonitorData* monitor;
    struct X520_DomainComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X520_DomainComponent_FWDDECL)
#define IL2CPP_STRUCT_X520_DomainComponent_FWDDECL
#include <Modloader/app/structs/X520_DomainComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_X520_DomainComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_X520_DomainComponent_DEFINED) && !defined(IL2CPP_STRUCT_X520_DomainComponent_FWDDECL)
#include <Modloader/app/structs/X520_DomainComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X520_DomainComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
