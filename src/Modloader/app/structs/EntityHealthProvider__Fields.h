#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHealthProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHealthProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHealthProvider__Fields_DEFINED)
#include <Modloader/app/structs/FloatValueProvider__Fields.h>
#if defined(IL2CPP_STRUCT_FloatValueProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityHealthProvider__Fields_DEFINED
struct LegacyEntity;
struct EntityHealthProvider__Fields {
    struct FloatValueProvider__Fields _;
    struct LegacyEntity* Entity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityHealthProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityHealthProvider__Fields_FWDDECL
#include <Modloader/app/structs/LegacyEntity.h>
#endif
#undef IL2CPP_STRUCT_EntityHealthProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHealthProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityHealthProvider__Fields_FWDDECL)
#include <Modloader/app/structs/EntityHealthProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHealthProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
