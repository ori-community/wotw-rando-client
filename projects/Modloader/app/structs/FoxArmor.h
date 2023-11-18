#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxArmor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxArmor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxArmor_DEFINED)
#include <Modloader/app/structs/FoxArmor__Fields.h>
#if defined(IL2CPP_STRUCT_FoxArmor__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxArmor_DEFINED
struct FoxArmor__Class;
struct FoxArmor {
    struct FoxArmor__Class* klass;
    MonitorData* monitor;
    struct FoxArmor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxArmor_FWDDECL)
#define IL2CPP_STRUCT_FoxArmor_FWDDECL
#include <Modloader/app/structs/FoxArmor__Class.h>
#endif
#undef IL2CPP_STRUCT_FoxArmor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxArmor_DEFINED) && !defined(IL2CPP_STRUCT_FoxArmor_FWDDECL)
#include <Modloader/app/structs/FoxArmor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxArmor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
