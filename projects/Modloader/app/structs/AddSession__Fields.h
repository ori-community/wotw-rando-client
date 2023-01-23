#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AddSession__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AddSession__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSession__Fields_DEFINED)
#include <Modloader/app/structs/SwaggerRequest_1_StatusCallback___Fields.h>
#if defined(IL2CPP_STRUCT_SwaggerRequest_1_StatusCallback___Fields_DEFINED)
#define IL2CPP_STRUCT_AddSession__Fields_DEFINED
struct GameSessionRecord;
struct AddSession__Fields {
    struct SwaggerRequest_1_StatusCallback___Fields _;
    struct GameSessionRecord* m_gameSession;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AddSession__Fields_FWDDECL)
#define IL2CPP_STRUCT_AddSession__Fields_FWDDECL
#include <Modloader/app/structs/GameSessionRecord.h>
#endif
#undef IL2CPP_STRUCT_AddSession__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AddSession__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AddSession__Fields_FWDDECL)
#include <Modloader/app/structs/AddSession__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AddSession__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
