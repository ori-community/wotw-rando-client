#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundZoneProcessor_Job_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundZoneProcessor_Job_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_DEFINED)
#define IL2CPP_STRUCT_SoundZoneProcessor_Job_DEFINED
struct SoundZoneProcessor_Job {
    int32_t m_index;
};
#endif
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_FWDDECL)
#define IL2CPP_STRUCT_SoundZoneProcessor_Job_FWDDECL
#endif
#undef IL2CPP_STRUCT_SoundZoneProcessor_Job_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_DEFINED) && !defined(IL2CPP_STRUCT_SoundZoneProcessor_Job_FWDDECL)
#include <Modloader/app/structs/SoundZoneProcessor_Job.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundZoneProcessor_Job.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
