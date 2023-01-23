#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriDamage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriDamage_DEFINED)
#include <Modloader/app/structs/OriDamage__Fields.h>
#if defined(IL2CPP_STRUCT_OriDamage__Fields_DEFINED)
#define IL2CPP_STRUCT_OriDamage_DEFINED
struct OriDamage__Class;
struct OriDamage {
    struct OriDamage__Class* klass;
    MonitorData* monitor;
    struct OriDamage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriDamage_FWDDECL)
#define IL2CPP_STRUCT_OriDamage_FWDDECL
#include <Modloader/app/structs/OriDamage__Class.h>
#endif
#undef IL2CPP_STRUCT_OriDamage_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriDamage_DEFINED) && !defined(IL2CPP_STRUCT_OriDamage_FWDDECL)
#include <Modloader/app/structs/OriDamage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriDamage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
