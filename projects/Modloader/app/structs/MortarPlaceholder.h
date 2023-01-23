#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarPlaceholder_DEFINED)
#include <Modloader/app/structs/MortarPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_MortarPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarPlaceholder_DEFINED
struct MortarPlaceholder__Class;
struct MortarPlaceholder {
    struct MortarPlaceholder__Class* klass;
    MonitorData* monitor;
    struct MortarPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_MortarPlaceholder_FWDDECL
#include <Modloader/app/structs/MortarPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_MortarPlaceholder_FWDDECL)
#include <Modloader/app/structs/MortarPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
