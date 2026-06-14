#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SplitWritesState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SplitWritesState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitWritesState__Fields_DEFINED)
#define IL2CPP_STRUCT_SplitWritesState__Fields_DEFINED
struct BufferOffsetSize_1__Array;
struct __declspec(align(8)) SplitWritesState__Fields {
    struct BufferOffsetSize_1__Array* _UserBuffers;
    int32_t _Index;
    int32_t _LastBufferConsumed;
    struct BufferOffsetSize_1__Array* _RealBuffers;
};
#endif
#if !defined(IL2CPP_STRUCT_SplitWritesState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SplitWritesState__Fields_FWDDECL
#include <Modloader/app/structs/BufferOffsetSize_1__Array.h>
#endif
#undef IL2CPP_STRUCT_SplitWritesState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SplitWritesState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SplitWritesState__Fields_FWDDECL)
#include <Modloader/app/structs/SplitWritesState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SplitWritesState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
