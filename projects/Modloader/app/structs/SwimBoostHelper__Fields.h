#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwimBoostHelper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwimBoostHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimBoostHelper__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwimBoostHelper__Fields_DEFINED
struct MessageProvider;
struct SwimBoostHelper__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider* MessageProvider;
    int32_t m_spamThreshold;
    bool m_analyzing;
    bool m_analyzingSpam;
    float m_hintTimer;
    float m_swimTime;
    int32_t m_boostPresses;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwimBoostHelper__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwimBoostHelper__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_SwimBoostHelper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimBoostHelper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwimBoostHelper__Fields_FWDDECL)
#include <Modloader/app/structs/SwimBoostHelper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwimBoostHelper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
