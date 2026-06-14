#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingClassInitialization__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingClassInitialization__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingClassInitialization__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadingClassInitialization__Fields_DEFINED
struct Thread;
struct __declspec(align(8)) LoadingClassInitialization__Fields {
    bool m_prewarmAllTypes;
    bool m_shouldGc;
    struct Thread* m_initThread;
    int32_t m_finishedCount;
};
#endif
#if !defined(IL2CPP_STRUCT_LoadingClassInitialization__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoadingClassInitialization__Fields_FWDDECL
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_LoadingClassInitialization__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingClassInitialization__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoadingClassInitialization__Fields_FWDDECL)
#include <Modloader/app/structs/LoadingClassInitialization__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingClassInitialization__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
