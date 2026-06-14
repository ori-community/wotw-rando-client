#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_DEFINED)
#include <Modloader/app/structs/Encoder__Fields.h>
#if defined(IL2CPP_STRUCT_Encoder__Fields_DEFINED)
#define IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_DEFINED
struct Encoding;
struct Encoding_DefaultEncoder__Fields {
    struct Encoder__Fields _;
    struct Encoding* m_encoding;
    bool m_hasInitializedEncoding;
    uint16_t charLeftOver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#endif
#undef IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Encoding_DefaultEncoder__Fields_FWDDECL)
#include <Modloader/app/structs/Encoding_DefaultEncoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoding_DefaultEncoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
