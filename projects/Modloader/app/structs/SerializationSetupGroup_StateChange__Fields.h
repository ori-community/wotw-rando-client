#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_DEFINED)
#define IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_DEFINED
struct ChangeStateOnCondition;
struct CompoundCondition;
struct PlayerInsideZoneChecker;
struct __declspec(align(8)) SerializationSetupGroup_StateChange__Fields {
    struct ChangeStateOnCondition* ChangeStateOnCondition;
    struct CompoundCondition* CompoundCondition;
    struct PlayerInsideZoneChecker* Trigger;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_FWDDECL)
#define IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_FWDDECL
#include <Modloader/app/structs/ChangeStateOnCondition.h>
#include <Modloader/app/structs/CompoundCondition.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SerializationSetupGroup_StateChange__Fields_FWDDECL)
#include <Modloader/app/structs/SerializationSetupGroup_StateChange__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializationSetupGroup_StateChange__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
