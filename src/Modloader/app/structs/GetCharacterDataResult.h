#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterDataResult_DEFINED)
#include <Modloader/app/structs/GetCharacterDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetCharacterDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCharacterDataResult_DEFINED
struct GetCharacterDataResult__Class;
struct GetCharacterDataResult {
    struct GetCharacterDataResult__Class* klass;
    MonitorData* monitor;
    struct GetCharacterDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterDataResult_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterDataResult_FWDDECL
#include <Modloader/app/structs/GetCharacterDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterDataResult_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterDataResult_FWDDECL)
#include <Modloader/app/structs/GetCharacterDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
