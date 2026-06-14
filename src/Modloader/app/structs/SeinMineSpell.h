#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMineSpell_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMineSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMineSpell_DEFINED)
#include <Modloader/app/structs/SeinMineSpell__Fields.h>
#if defined(IL2CPP_STRUCT_SeinMineSpell__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinMineSpell_DEFINED
struct SeinMineSpell__Class;
struct SeinMineSpell {
    struct SeinMineSpell__Class* klass;
    MonitorData* monitor;
    struct SeinMineSpell__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinMineSpell_FWDDECL)
#define IL2CPP_STRUCT_SeinMineSpell_FWDDECL
#include <Modloader/app/structs/SeinMineSpell__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinMineSpell_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMineSpell_DEFINED) && !defined(IL2CPP_STRUCT_SeinMineSpell_FWDDECL)
#include <Modloader/app/structs/SeinMineSpell.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMineSpell.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
