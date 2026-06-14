#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CurrentCharacterFacingCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CurrentCharacterFacingCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentCharacterFacingCondition_DEFINED)
#include <Modloader/app/structs/CurrentCharacterFacingCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CurrentCharacterFacingCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CurrentCharacterFacingCondition_DEFINED
struct CurrentCharacterFacingCondition__Class;
struct CurrentCharacterFacingCondition {
    struct CurrentCharacterFacingCondition__Class* klass;
    MonitorData* monitor;
    struct CurrentCharacterFacingCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CurrentCharacterFacingCondition_FWDDECL)
#define IL2CPP_STRUCT_CurrentCharacterFacingCondition_FWDDECL
#include <Modloader/app/structs/CurrentCharacterFacingCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CurrentCharacterFacingCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CurrentCharacterFacingCondition_DEFINED) && !defined(IL2CPP_STRUCT_CurrentCharacterFacingCondition_FWDDECL)
#include <Modloader/app/structs/CurrentCharacterFacingCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CurrentCharacterFacingCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
