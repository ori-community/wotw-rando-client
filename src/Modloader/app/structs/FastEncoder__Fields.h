#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastEncoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastEncoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoder__Fields_DEFINED)
#define IL2CPP_STRUCT_FastEncoder__Fields_DEFINED
struct FastEncoderWindow;
struct Match_1;
struct __declspec(align(8)) FastEncoder__Fields {
    struct FastEncoderWindow* inputWindow;
    struct Match_1* currentMatch;
    double lastCompressionRatio;
};
#endif
#if !defined(IL2CPP_STRUCT_FastEncoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_FastEncoder__Fields_FWDDECL
#include <Modloader/app/structs/FastEncoderWindow.h>
#include <Modloader/app/structs/Match_1.h>
#endif
#undef IL2CPP_STRUCT_FastEncoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FastEncoder__Fields_FWDDECL)
#include <Modloader/app/structs/FastEncoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastEncoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
