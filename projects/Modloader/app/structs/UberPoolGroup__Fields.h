#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolGroup__Fields_DEFINED
struct UberPoolSettings;
struct List_1_UberPoolItem_;
struct String;
struct UberPoolGroup__Fields {
    struct MonoBehaviour__Fields _;
    struct UberPoolSettings* m_setting;
    int32_t m_peakObjectCount;
    struct List_1_UberPoolItem_* m_poolObjects;
    struct String* m_poolName;
    int32_t m_minNumber;
    int32_t m_minNumberFromPrewarm;
    int32_t m_minNumberFromScene;
    int32_t m_maxLoadedCount;
    int32_t m_loadedFromScene;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberPoolItem_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberPoolSettings.h>
#endif
#undef IL2CPP_STRUCT_UberPoolGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolGroup__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
