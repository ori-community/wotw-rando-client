#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextBoxLine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextBoxLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxLine_DEFINED)
#define IL2CPP_STRUCT_TextBoxLine_DEFINED
struct TextBoxLine {
    int32_t firstCharIndex;
    int32_t lastCharIndex;
    float top;
    float bottom;
    float baseline;
    float horizontalStart;
    float horizontalEnd;
};
#endif
#if !defined(IL2CPP_STRUCT_TextBoxLine_FWDDECL)
#define IL2CPP_STRUCT_TextBoxLine_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextBoxLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextBoxLine_DEFINED) && !defined(IL2CPP_STRUCT_TextBoxLine_FWDDECL)
#include <Modloader/app/structs/TextBoxLine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextBoxLine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
