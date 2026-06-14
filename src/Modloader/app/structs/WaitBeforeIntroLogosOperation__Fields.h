#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_DEFINED)
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_DEFINED
struct WaitBeforeIntroLogosOperation__Fields {
    struct BasePrewarmOperation__Fields _;
    float m_timeAccum;
    float m_totalWait;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitBeforeIntroLogosOperation__Fields_FWDDECL)
#include <Modloader/app/structs/WaitBeforeIntroLogosOperation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitBeforeIntroLogosOperation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
