#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_DEFINED)
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_DEFINED
struct GuessHFRPrewarmOperation__Fields {
    struct BasePrewarmOperation__Fields _;
    int32_t m_oldVsync;
    int32_t m_frameCount;
    int32_t m_counter;
    bool m_hfrSupported;
    float m_startTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_FWDDECL)
#define IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GuessHFRPrewarmOperation__Fields_FWDDECL)
#include <Modloader/app/structs/GuessHFRPrewarmOperation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuessHFRPrewarmOperation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
