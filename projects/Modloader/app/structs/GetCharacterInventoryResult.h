#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetCharacterInventoryResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetCharacterInventoryResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterInventoryResult_DEFINED)
#include <Modloader/app/structs/GetCharacterInventoryResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetCharacterInventoryResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetCharacterInventoryResult_DEFINED
struct GetCharacterInventoryResult__Class;
struct GetCharacterInventoryResult {
    struct GetCharacterInventoryResult__Class* klass;
    MonitorData* monitor;
    struct GetCharacterInventoryResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetCharacterInventoryResult_FWDDECL)
#define IL2CPP_STRUCT_GetCharacterInventoryResult_FWDDECL
#include <Modloader/app/structs/GetCharacterInventoryResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetCharacterInventoryResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetCharacterInventoryResult_DEFINED) && !defined(IL2CPP_STRUCT_GetCharacterInventoryResult_FWDDECL)
#include <Modloader/app/structs/GetCharacterInventoryResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetCharacterInventoryResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
