#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundBankEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundBankEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundBankEntry_DEFINED)
#include <Modloader/app/structs/SoundBankEntry__Fields.h>
#if defined(IL2CPP_STRUCT_SoundBankEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundBankEntry_DEFINED
struct SoundBankEntry__Class;
struct SoundBankEntry {
    struct SoundBankEntry__Class* klass;
    MonitorData* monitor;
    struct SoundBankEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundBankEntry_FWDDECL)
#define IL2CPP_STRUCT_SoundBankEntry_FWDDECL
#include <Modloader/app/structs/SoundBankEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundBankEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundBankEntry_DEFINED) && !defined(IL2CPP_STRUCT_SoundBankEntry_FWDDECL)
#include <Modloader/app/structs/SoundBankEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundBankEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
