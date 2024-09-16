#include <gtest/gtest.h>

TEST(SoundexTestSuite,generateSoundexCode_ReturnsEmptyStringForEmptyStringInput)
{
 char soundexCode[5];
 generateSoundexCode("",soundexCode);
 EXPECT_EQ(strcmp(soundexCode,"")==0));
}
