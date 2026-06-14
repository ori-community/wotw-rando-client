#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_DEFINED)
#define IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_DEFINED
struct IDataProvider;
struct __declspec(align(8)) TwoDataProviderSynchronizer__Fields {
    struct IDataProvider* m_playFabAchievementProvider;
    struct IDataProvider* m_platformAchievementProvider;
};
#endif
#if !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_FWDDECL
#include <Modloader/app/structs/IDataProvider.h>
#endif
#undef IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TwoDataProviderSynchronizer__Fields_FWDDECL)
#include <Modloader/app/structs/TwoDataProviderSynchronizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TwoDataProviderSynchronizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
