#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BRECORD_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BRECORD_INITIALIZING
#if !defined(IL2CPP_STRUCT_BRECORD_DEFINED)
#define IL2CPP_STRUCT_BRECORD_DEFINED
struct BRECORD {
    void* pvRecord;
    void* pRecInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_BRECORD_FWDDECL)
#define IL2CPP_STRUCT_BRECORD_FWDDECL
#endif
#undef IL2CPP_STRUCT_BRECORD_INITIALIZING
#if !defined(IL2CPP_STRUCT_BRECORD_DEFINED) && !defined(IL2CPP_STRUCT_BRECORD_FWDDECL)
#include <Modloader/app/structs/BRECORD.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BRECORD.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
