#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeQuest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeQuest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeQuest__Fields_DEFINED)
#include <Modloader/app/structs/Quest_QuestType__Enum.h>
#if defined(IL2CPP_STRUCT_Quest_QuestType__Enum_DEFINED)
#define IL2CPP_STRUCT_RuntimeQuest__Fields_DEFINED
struct MoonGuid;
struct IGenericUberState;
struct Quest;
struct __declspec(align(8)) RuntimeQuest__Fields {
    struct MoonGuid* MoonGuid;
    Quest_QuestType__Enum Type;

    int32_t m_stateOffset;
    int32_t m_state;
    struct IGenericUberState* m_uberState;
    struct Quest* m_chained;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeQuest__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeQuest__Fields_FWDDECL
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/MoonGuid.h>
#include <Modloader/app/structs/Quest.h>
#endif
#undef IL2CPP_STRUCT_RuntimeQuest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeQuest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeQuest__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeQuest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeQuest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
