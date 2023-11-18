#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HebrewNumberParsingContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HebrewNumberParsingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumberParsingContext_DEFINED)
#include <Modloader/app/structs/HebrewNumber_HS__Enum.h>
#if defined(IL2CPP_STRUCT_HebrewNumber_HS__Enum_DEFINED)
#define IL2CPP_STRUCT_HebrewNumberParsingContext_DEFINED
struct HebrewNumberParsingContext {
    HebrewNumber_HS__Enum state;

    int32_t result;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HebrewNumberParsingContext_FWDDECL)
#define IL2CPP_STRUCT_HebrewNumberParsingContext_FWDDECL
#endif
#undef IL2CPP_STRUCT_HebrewNumberParsingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_HebrewNumberParsingContext_DEFINED) && !defined(IL2CPP_STRUCT_HebrewNumberParsingContext_FWDDECL)
#include <Modloader/app/structs/HebrewNumberParsingContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HebrewNumberParsingContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
