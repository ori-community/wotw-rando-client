#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMemBankLoader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMemBankLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemBankLoader_DEFINED)
#include <Modloader/app/structs/AkMemBankLoader__Fields.h>
#if defined(IL2CPP_STRUCT_AkMemBankLoader__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMemBankLoader_DEFINED
struct AkMemBankLoader__Class;
struct AkMemBankLoader {
    struct AkMemBankLoader__Class* klass;
    MonitorData* monitor;
    struct AkMemBankLoader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMemBankLoader_FWDDECL)
#define IL2CPP_STRUCT_AkMemBankLoader_FWDDECL
#include <Modloader/app/structs/AkMemBankLoader__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMemBankLoader_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMemBankLoader_DEFINED) && !defined(IL2CPP_STRUCT_AkMemBankLoader_FWDDECL)
#include <Modloader/app/structs/AkMemBankLoader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMemBankLoader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
