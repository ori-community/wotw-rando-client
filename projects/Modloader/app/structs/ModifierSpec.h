#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifierSpec_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifierSpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierSpec_DEFINED)
#define IL2CPP_STRUCT_ModifierSpec_DEFINED
struct ModifierSpec__Class;
struct ModifierSpec {
    struct ModifierSpec__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ModifierSpec_FWDDECL)
#define IL2CPP_STRUCT_ModifierSpec_FWDDECL
#include <Modloader/app/structs/ModifierSpec__Class.h>
#endif
#undef IL2CPP_STRUCT_ModifierSpec_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierSpec_DEFINED) && !defined(IL2CPP_STRUCT_ModifierSpec_FWDDECL)
#include <Modloader/app/structs/ModifierSpec.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifierSpec.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
