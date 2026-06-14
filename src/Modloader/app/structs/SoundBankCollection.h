#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundBankCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundBankCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundBankCollection_DEFINED)
#include <Modloader/app/structs/SoundBankCollection__Fields.h>
#if defined(IL2CPP_STRUCT_SoundBankCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundBankCollection_DEFINED
struct SoundBankCollection__Class;
struct SoundBankCollection {
    struct SoundBankCollection__Class* klass;
    MonitorData* monitor;
    struct SoundBankCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundBankCollection_FWDDECL)
#define IL2CPP_STRUCT_SoundBankCollection_FWDDECL
#include <Modloader/app/structs/SoundBankCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundBankCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundBankCollection_DEFINED) && !defined(IL2CPP_STRUCT_SoundBankCollection_FWDDECL)
#include <Modloader/app/structs/SoundBankCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundBankCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
