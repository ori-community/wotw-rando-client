#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateCharacterDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateCharacterDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterDataResult_DEFINED)
#include <Modloader/app/structs/UpdateCharacterDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateCharacterDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateCharacterDataResult_DEFINED
struct UpdateCharacterDataResult__Class;
struct UpdateCharacterDataResult {
    struct UpdateCharacterDataResult__Class* klass;
    MonitorData* monitor;
    struct UpdateCharacterDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateCharacterDataResult_FWDDECL)
#define IL2CPP_STRUCT_UpdateCharacterDataResult_FWDDECL
#include <Modloader/app/structs/UpdateCharacterDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateCharacterDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateCharacterDataResult_DEFINED) && !defined(IL2CPP_STRUCT_UpdateCharacterDataResult_FWDDECL)
#include <Modloader/app/structs/UpdateCharacterDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateCharacterDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
