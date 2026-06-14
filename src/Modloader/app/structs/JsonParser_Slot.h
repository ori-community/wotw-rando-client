#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonParser_Slot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonParser_Slot_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser_Slot_DEFINED)
#define IL2CPP_STRUCT_JsonParser_Slot_DEFINED
struct JsonParser;
struct JsonParser_Slot {
    int32_t m_ident;
    struct JsonParser* m_parser;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonParser_Slot_FWDDECL)
#define IL2CPP_STRUCT_JsonParser_Slot_FWDDECL
#include <Modloader/app/structs/JsonParser.h>
#endif
#undef IL2CPP_STRUCT_JsonParser_Slot_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonParser_Slot_DEFINED) && !defined(IL2CPP_STRUCT_JsonParser_Slot_FWDDECL)
#include <Modloader/app/structs/JsonParser_Slot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonParser_Slot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
